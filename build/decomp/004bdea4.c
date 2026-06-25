// OoT3D decomp @ 004bdea4  name=FUN_004bdea4  size=156

void FUN_004bdea4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  FUN_002e0f7c();
  iVar1 = DAT_004bdf40;
  if (*(int *)(DAT_004bdf40 + 0x10) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (param_1 == 1) {
    local_14 = DAT_004bdf44;
    FUN_0037547c(DAT_004bdf4c,0,4,DAT_004bdf48,DAT_004bdf48);
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  if (*(int *)(iVar1 + 0x28) == 0) {
    uVar2 = 2;
  }
  else {
    local_14 = DAT_004bdf50;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 8),&local_14,1,0x39);
    uVar2 = 0xf;
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  return;
}

