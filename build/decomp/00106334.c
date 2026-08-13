// OoT3D decomp @ 00106334  name=FUN_00106334  size=576

/* WARNING: Possible PIC construction at 0x001064ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001067a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001064f0) */
/* WARNING: Removing unreachable block (ram,0x00106510) */
/* WARNING: Removing unreachable block (ram,0x001065b8) */
/* WARNING: Removing unreachable block (ram,0x0010662c) */
/* WARNING: Removing unreachable block (ram,0x001067c4) */
/* WARNING: Removing unreachable block (ram,0x001067e4) */
/* WARNING: Removing unreachable block (ram,0x001067e8) */
/* WARNING: Removing unreachable block (ram,0x001067ec) */
/* WARNING: Removing unreachable block (ram,0x001067f0) */
/* WARNING: Removing unreachable block (ram,0x00106804) */
/* WARNING: Removing unreachable block (ram,0x00106844) */
/* WARNING: Removing unreachable block (ram,0x001068b8) */
/* WARNING: Removing unreachable block (ram,0x00106928) */
/* WARNING: Removing unreachable block (ram,0x001067a4) */
/* WARNING: Removing unreachable block (ram,0x003700e0) */
/* WARNING: Removing unreachable block (ram,0x0037011c) */

void FUN_00106334(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar5 = *(int *)(iRam0010672c + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  iVar3 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uRam00106730,param_1 + 0x1a4);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x124);
    func_0x00374a58(uRam00106734,param_1 + 0x1a4,7);
    *(undefined4 *)(param_1 + 0x2b0) = uRam00106738;
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,7);
    iVar3 = iRam0010673c;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x310) = uVar4;
    *(undefined2 *)(iVar3 + iVar6) = 0x2d;
    *(undefined2 *)(param_1 + 0x2b8) = 0;
  }
  if ((*(int *)(param_1 + 0x1e0) < iRam00106740) ||
     (iRam00106740 + 0xc40000 <= *(int *)(param_1 + 0x1e0))) {
    sVar1 = 0;
    uVar4 = 0x1067a4;
  }
  else {
    iVar6 = FUN_003736fc(uRam00106748,uRam00106744,param_1 + 0x1a4);
    uVar4 = uRam00106750;
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = param_2 + 0x3000;
    }
    if (iVar6 != 0) {
      *(undefined4 *)(iVar3 + 600) = uRam0010674c;
    }
    func_0x00375bcc(param_1,uVar4);
    fVar7 = *(float *)(param_1 + 0x1e0);
    if (iRam00106754 < (int)fVar7) {
      fVar7 = (float)(int)((fRam00106758 - fVar7) * fRam0010675c);
    }
    fVar11 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x328);
    fVar8 = *(float *)(iVar5 + 0x2c);
    fVar9 = *(float *)(param_1 + 0x32c);
    fVar10 = *(float *)(iVar5 + 0x30) - *(float *)(param_1 + 0x330);
    sVar1 = func_0x003758b0(fVar10,fVar11,fVar7);
    sVar2 = func_0x003758b0(SQRT(fVar11 * fVar11 + fVar10 * fVar10),fVar8 - fVar9);
    iVar5 = (int)(short)(sVar1 - *(short *)(param_1 + 0xbe));
    if (iVar5 < 0x1f41) {
      if (iVar5 < -8000) {
        iVar5 = iRam00106760;
      }
    }
    else {
      iVar5 = 8000;
    }
    sVar1 = (short)iVar5;
    iVar5 = (int)(short)(-7000 - sVar2);
    if (iVar5 < 0x3e9) {
      if (iVar5 < -4000) {
        iVar5 = iRam00106764;
      }
    }
    else {
      iVar5 = 1000;
    }
    uVar4 = 0x1064f0;
  }
  sVar2 = *(short *)(param_1 + 0x336);
  sVar1 = func_0x00368d94((int)(short)(sVar1 - sVar2),5,5,2000,param_1,param_1 + 0x200,iVar5,uVar4);
  iVar3 = (int)sVar1;
  iVar5 = (int)*(short *)(*piRam00370164 + 0x110);
  if (iVar3 < 0x7d1) {
    if (iVar3 < -2000) {
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(2000,(byte)(in_fpscr >> 0x15) & 3);
      sVar1 = -(short)(int)(fRam0037016c + fVar7 * fVar8 * fRam00370168);
    }
    else {
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar3 < 1) {
        fVar7 = fVar7 * fVar8 * fRam00370168 - fRam0037016c;
      }
      else {
        fVar7 = fRam0037016c + fVar7 * fVar8 * fRam00370168;
      }
      sVar1 = (short)(int)fVar7;
    }
  }
  else {
    fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(2000,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = (short)(int)(fRam0037016c + fVar7 * fVar8 * fRam00370168);
  }
  *(short *)(param_1 + 0x336) = sVar1 + sVar2;
  return;
}
