package com.qsurf.aas.view.adapters;

import com.qsurf.aas.R;

public class File implements LayoutItemType {
    public String fileName;

    public File(String fileName) {
        this.fileName = fileName;
    }

    @Override
    public int getLayoutId() {
        return R.layout.item_file;
    }
}