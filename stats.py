from subprocess import run


def get_num_words(file_path):
    run(['bash', 'main.sh', file_path])
