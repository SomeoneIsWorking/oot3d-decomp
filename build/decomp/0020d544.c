// OoT3D decomp @ 0020d544  name=FUN_0020d544  size=148

int FUN_0020d544(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  lVar1 = (longlong)(param_2 * 0xffff) * (longlong)DAT_0020d6ac +
          ((ulonglong)(uint)(param_2 * 0xffff) << 0x20);
  iVar2 = (int)((ulonglong)lVar1 >> 0x20);
  iVar2 = (iVar2 >> 8) - (iVar2 >> 0x1f);
  if (param_4 < 0) {
    iVar2 = -param_4;
  }
  if (param_6 < 1) {
    return iVar2;
  }
  uVar3 = FUN_00368d94(0,param_6,(int)lVar1);
  VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(uVar3);
}
