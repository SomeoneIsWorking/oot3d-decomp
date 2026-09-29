// OoT3D decomp @ 003072f8  name=FUN_003072f8  size=144

void FUN_003072f8(void)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = DAT_0030738c;
  uVar1 = DAT_00307388;
  *(undefined4 *)(DAT_0030738c + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  *(undefined4 *)(iVar2 + 0x54) = uVar1;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 100) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    FUN_00305830();
    FUN_003525d4();
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  if (*(int *)(iVar2 + 0x38) != 0) {
    FUN_002f2c28();
    FUN_003525d4();
    *(undefined4 *)(iVar2 + 0x38) = 0;
  }
  if (*(int *)(iVar2 + 0x3c) != 0) {
    FUN_002f2b60();
    FUN_003525d4();
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  return;
}
