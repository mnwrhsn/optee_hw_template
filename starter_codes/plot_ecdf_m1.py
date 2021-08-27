# __author__ = "Monowar Hasan"
# __email__ = "monowar.hasan@wichita.edu"

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import math

# change font size to look the graphs nicer
def setup_font():
    # change font to Arial
    plt.rcParams["font.family"] = "Arial"
    plt.rcParams['font.size'] = 16
    plt.rcParams['legend.fontsize'] = 13
    plt.rcParams['axes.titlesize'] = 11.5
    plt.rcParams['ytick.labelsize'] = 14
    plt.rcParams['xtick.labelsize'] = 14
    plt.rcParams["legend.edgecolor"] = 'black'


def ecdf(data):
    """ Compute ECDF """
    x = np.sort(data)
    n = x.size
    y = np.arange(1, n + 1) / n
    return x, y


def get_data_by_filename(filename):

    # read data
    df = pd.read_csv(filename)

    # extract individual values
    time_initialize_context = df[df.columns[0]].values
    time_open_session = df[df.columns[1]].values
    time_invoke_command = df[df.columns[2]].values
    time_close_session = df[df.columns[3]].values
    time_finalize_context = df[df.columns[4]].values


    return time_initialize_context, time_open_session, time_invoke_command, \
        time_close_session, time_finalize_context



def plot_ecdf(raw_val, command_name):

    plt.figure()
    ecdfx, ecdfy = ecdf(raw_val)
    plt.plot(ecdfx, ecdfy, color='k')

    plt.xlabel("Execution Time (ns)")
    plt.ylabel("Empirical CDF")
    plt.title(command_name)
    plt.savefig(command_name+".pdf", pad_inches=0.01, bbox_inches='tight')

    plt.show()


if __name__ == '__main__':

    setup_font()
    time_initialize_context, time_open_session, time_invoke_command, \
        time_close_session, time_finalize_context = get_data_by_filename('HW1_M1_YOUR_WSU_ID.txt')

    # this function will generate plots given by the command name
    # and save as a PDF file
    plot_ecdf(time_initialize_context, "TEEC_InitializeContext")

    # repeat this for rest of the APIs
