// OoT3D decomp @ 002bcbac  name=FUN_002bcbac  size=368

void FUN_002bcbac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  iVar1 = FUN_0033bd6c();
  if (iVar1 == 0) {
    uVar3 = *(uint *)(DAT_002bcd1c + param_1);
    bVar5 = (uVar3 & 0x1000000) != 0;
    if (bVar5) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x2218);
    }
    if ((!bVar5 || uVar3 == 0) && (fVar6 = *(float *)(param_1 + 0x221c), DAT_002bcd20 < (int)fVar6))
    {
      iVar4 = (int)(short)(int)(fVar6 * DAT_002bcd24);
      bVar5 = iVar4 + 4000 < 0;
      iVar1 = iVar4;
      if (bVar5 != SCARRY4(iVar4,4000)) {
        iVar1 = DAT_002bcd2c;
      }
      fVar7 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_1 + 0x2220) -
                                                     *(short *)(param_1 + 0xbe)),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((bVar5 == SCARRY4(iVar4,4000)) && (4000 < iVar1)) {
        iVar1 = 4000;
      }
      iVar4 = -(int)(short)(int)(fVar7 * DAT_002bcd28 * fVar6);
      iVar2 = DAT_002bcd2c;
      if ((iVar4 + 4000 < 0 == SCARRY4(iVar4,4000)) && (iVar2 = iVar4, 4000 < iVar4)) {
        iVar2 = 4000;
      }
      iVar4 = *(int *)(DAT_002bcd30 + param_2);
      if (iVar4 == 0 || iVar4 == param_1) {
        FUN_00370378(param_1 + 0x1756,iVar1,900);
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1756),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1750) = (short)(int)(fVar6 * DAT_002bcd34);
      }
      else {
        FUN_002bf814(param_1,param_2,iVar4,0);
      }
      FUN_00370378(param_1 + 0x1754,(int)(short)iVar2,300);
      FUN_00370378(param_1 + 0x175a,(int)(short)iVar2,200);
      *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x168;
      return;
    }
  }
  FUN_002ddba0(param_1,param_2);
  return;
}

