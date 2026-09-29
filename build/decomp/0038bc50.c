// OoT3D decomp @ 0038bc50  name=FUN_0038bc50  size=304

void FUN_0038bc50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;

  FUN_0031cb28();
  uVar3 = DAT_0038bdb0;
  uVar2 = DAT_0038bdac;
  if (*(char *)(DAT_0038bda8 + 9) == '\r') {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,6);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar3,uVar4,uVar3,param_1 + 0x1a4,6,0);
    iVar1 = *(short *)(param_1 + 0x1c) * 10;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar6 = fVar6 * DAT_0038bdb4 * DAT_0038bdb8 - DAT_0038bdb8;
    }
    else {
      fVar6 = DAT_0038bdb8 + fVar6 * DAT_0038bdb4 * DAT_0038bdb8;
    }
    *(int *)(param_1 + 0xf9c) = (int)fVar6;
    *(undefined4 *)(param_1 + 0xf90) = DAT_0038bdbc;
  }
  else if ('\x02' < *(char *)(DAT_0038bda8 + 9)) {
    uVar5 = *(int *)(param_1 + 0xf9c) + 1;
    *(uint *)(param_1 + 0xf9c) = uVar5;
    if ((uVar5 & 1) == 0) {
      uVar4 = VectorUnsignedToFloat(((uVar5 & 0x20) >> 5) + 1,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0031f5a8(DAT_0038bdc0,uVar3,uVar4,param_2,param_1,2,0x5a,5,1);
    }
    FUN_003731e0(param_1 + 0x1a4);
    FUN_0036e168(uVar2,uVar2,DAT_0038bdc4,uVar3,param_1 + 0x1e4);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
