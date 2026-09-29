// OoT3D decomp @ 0026af8c  name=FUN_0026af8c  size=288

void FUN_0026af8c(int param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float local_28;

  uVar7 = DAT_0026b1c4;
  iVar6 = DAT_0026b1c0;
  uVar5 = DAT_0026b1bc;
  uVar4 = DAT_0026b1b8;
  fVar3 = DAT_0026b1b4;
  uVar2 = *(ushort *)(param_1 + 0x1c);
  iVar9 = DAT_0026b1b0 + (uVar2 & 0xf) * 0xc;
  uVar1 = (uVar2 & 0x3f0) >> 4;
  fVar10 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 7),(byte)(in_fpscr >> 0x15) & 3);
  local_28 = *(float *)(param_1 + 0x54) / (fVar10 * DAT_0026b1b4);
  if ((uVar2 & 0x800) == 0) {
    iVar8 = FUN_0036e864(param_2,uVar1);
    if (iVar8 == 0) goto LAB_0026b070;
  }
  else {
    iVar8 = FUN_0036e864(param_2,uVar1);
    if (iVar8 != 0) {
LAB_0026b070:
      FUN_003705a0(uVar5,uVar4,&local_28);
      goto LAB_0026b080;
    }
  }
  if ((int)local_28 < iVar6) {
    FUN_0037572c(uVar7,param_1);
    return;
  }
  FUN_003705a0(uVar7,uVar4,&local_28);
LAB_0026b080:
  fVar10 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 7),(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c(fVar10 * fVar3 * local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
