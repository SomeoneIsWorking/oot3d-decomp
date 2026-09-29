// OoT3D decomp @ 00360ccc  name=FUN_00360ccc  size=188

undefined4
FUN_00360ccc(float param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_0036bc98();
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x8b4) = DAT_00360d88;
    *(undefined4 *)(param_2 + 0x8b0) = param_5;
    *(ushort *)(param_2 + 0x8a8) = *(ushort *)(param_2 + 0x8a8) & 0xfffb;
    *(undefined4 *)(param_2 + 0x8ac) = 2;
    uVar2 = FUN_0036ae14(param_2 + 0x1fc,2);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00360d94,DAT_00360d90,uVar2,DAT_00360d8c,param_2 + 0x1fc,2);
    return 1;
  }
  *(undefined2 *)(DAT_00360d98 + param_2) = param_4;
  if (*(float *)(param_2 + 0x98) < param_1) {
    FUN_0036bb28(param_1,param_2,param_3);
  }
  return 0;
}
