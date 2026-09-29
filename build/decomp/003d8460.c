// OoT3D decomp @ 003d8460  name=FUN_003d8460  size=176

/* WARNING: Removing unreachable block (ram,0x003d84f0) */

void FUN_003d8460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  uVar1 = DAT_003d859c;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x34) = (short)(int)(fVar3 + fVar4 * DAT_003d8598);
  iVar2 = FUN_00370378(param_1 + 0xbc,uVar1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
