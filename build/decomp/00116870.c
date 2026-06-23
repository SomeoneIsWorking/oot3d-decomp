// OoT3D decomp @ 00116870  name=FUN_00116870  size=128

void FUN_00116870(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x98) <= DAT_001168f0) && (*(int *)(param_1 + 0xe18) != 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_001168f4,7);
    uVar1 = DAT_001168fc;
    *(undefined4 *)(param_1 + 0x6c) = DAT_001168f8;
    *(undefined4 *)(param_1 + 0xd88) = uVar1;
  }
  FUN_00370f5c(param_2,param_1 + 0xe24,param_1 + 0xe5c,
               *(undefined4 *)(DAT_00116900 + (*(ushort *)(param_1 + 0x1c) & 0x7f) * 0x18 + 0xc));
  return;
}

