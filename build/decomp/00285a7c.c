// OoT3D decomp @ 00285a7c  name=FUN_00285a7c  size=336

void FUN_00285a7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  if (*(int *)(param_1 + 0x4a4) != 0) {
    FUN_00375a18(param_1 + 0x4d8,0,10,DAT_00285bdc,0);
    *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + -1;
    FUN_003731e0(param_1 + 0x1a4);
    return;
  }
  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00285bd0;
  uVar1 = DAT_00285bcc;
  if (iVar4 != 0) {
    sVar3 = *(short *)(param_1 + 0x4e2) + 1;
    *(short *)(param_1 + 0x4e2) = sVar3;
    uVar5 = DAT_00285bd8;
    if (sVar3 != 3) {
      if (sVar3 == 1) {
        uVar5 = FUN_0036ae14(param_1 + 0x1a4,0);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar2,uVar1,uVar5,uVar1,param_1 + 0x1a4,0,2);
        return;
      }
      *(undefined4 *)(param_1 + 0x1e0) = uVar1;
      *(undefined4 *)(param_1 + 0x1e4) = uVar5;
      *(undefined4 *)(param_1 + 0x4a4) = 0xf;
      return;
    }
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar5,uVar5,uVar1,param_1 + 0x1a4,0,2);
    *(undefined2 *)(param_1 + 0x4e4) = 0;
    *(undefined2 *)(param_1 + 0x4e2) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    uVar1 = DAT_00285bd4;
    *(undefined4 *)(param_1 + 0x4a4) = 0xf;
    *(undefined4 *)(param_1 + 0x498) = uVar1;
  }
  return;
}
