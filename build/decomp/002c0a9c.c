// OoT3D decomp @ 002c0a9c  name=FUN_002c0a9c  size=132

void FUN_002c0a9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_1 + 0x18c) != param_2) {
    iVar1 = FUN_00306f04();
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) * *(float *)(iVar1 + 0x44);
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) * *(float *)(iVar1 + 0x40);
    uVar2 = DAT_002c0b20;
    *(undefined4 *)(param_1 + 0xcc) = DAT_002c0b20;
    *(undefined4 *)(param_1 + 200) = uVar2;
    if (((param_2 != 0 && param_2 != 0x11) && param_2 != 3) && param_2 != 0x13) {
      *(undefined2 *)(param_1 + 0x1b4) = 0;
      *(undefined2 *)(param_1 + 0x1b2) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  return;
}

