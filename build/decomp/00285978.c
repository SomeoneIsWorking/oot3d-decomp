// OoT3D decomp @ 00285978  name=FUN_00285978  size=204

void FUN_00285978(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = DAT_00285a58;
  FUN_0036e168(DAT_00285a58,DAT_00285a60,DAT_00285a5c,DAT_00285a58,param_1 + 0x6c);
  FUN_003731e0(param_1 + 0x1e4);
  if ((*(short *)(param_1 + 0x8f6) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x8f6) + -1, *(short *)(param_1 + 0x8f6) = sVar1, sVar1 < 1)) {
    if (*(short *)(param_1 + 0x1c) < 0) {
      FUN_00370350(DAT_00285a64,param_1 + 0x1e4,1);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e,0x32);
    }
    FUN_0036e734(param_1 + 0x1e4,6);
    FUN_00375bcc(param_1,DAT_00285a6c);
    iVar3 = DAT_00285a74;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00285a70;
    *(undefined2 *)(iVar3 + param_1) = 1;
    *(undefined4 *)(param_1 + 0x8ec) = 10;
    *(undefined2 *)(param_1 + 0x8fa) = 5;
    *(undefined4 *)(param_1 + 0x8f0) = DAT_00285a78;
  }
  return;
}
