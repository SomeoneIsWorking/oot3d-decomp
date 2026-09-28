// OoT3D decomp @ 0035bbe0  name=FUN_0035bbe0  size=860

void FUN_0035bbe0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint in_fpscr;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  byte *apbStack_c0 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;

  fVar5 = fRam0035bf4c;
  uVar4 = uRam0035bf48;
  fVar3 = fRam0035bf40;
  uStack_58 = *(undefined4 *)(iRam0035bf3c + 0xc);
  uStack_54 = *(undefined4 *)(iRam0035bf3c + 0x10);
  uStack_50 = *(undefined4 *)(iRam0035bf3c + 0x14);
  uStack_4c = *(undefined4 *)(iRam0035bf3c + 0x18);
  uStack_48 = *(undefined4 *)(iRam0035bf3c + 0x1c);
  uStack_44 = *(undefined4 *)(iRam0035bf3c + 0x20);
  uStack_40 = *(undefined4 *)(iRam0035bf3c + 0x24);
  pfVar12 = &fStack_64;
  uStack_3c = *(undefined4 *)(iRam0035bf3c + 0x28);
  uStack_38 = *(undefined4 *)(iRam0035bf3c + 0x2c);
  fStack_64 = (float)VectorUnsignedToFloat((uint)param_1[8],(byte)(in_fpscr >> 0x15) & 3);
  fStack_64 = fStack_64 * fRam0035bf40;
  fStack_60 = (float)VectorUnsignedToFloat((uint)param_1[9],(byte)(in_fpscr >> 0x15) & 3);
  fStack_60 = fStack_60 * fRam0035bf40;
  fStack_5c = (float)VectorUnsignedToFloat((uint)param_1[10],(byte)(in_fpscr >> 0x15) & 3);
  fStack_5c = fStack_5c * fRam0035bf40;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  uStack_68 = 0;
  uStack_84 = *puRam0035bf44;
  uStack_80 = puRam0035bf44[1];
  uStack_7c = puRam0035bf44[2];
  uStack_78 = puRam0035bf44[3];
  uStack_94 = puRam0035bf44[4];
  uStack_90 = puRam0035bf44[5];
  uStack_8c = puRam0035bf44[6];
  uStack_88 = puRam0035bf44[7];
  apbStack_c0[7] = (byte *)puRam0035bf44[8];
  uStack_a0 = puRam0035bf44[9];
  uStack_9c = puRam0035bf44[10];
  uStack_98 = puRam0035bf44[0xb];
  uVar9 = (uint)*param_1;
  if (uVar9 == 0) {
    func_0x0033d174(param_2,0,&fStack_74,&fStack_64,&uStack_84,&uStack_94);
    func_0x0033d200(param_2,0);
    iVar10 = 1;
    do {
      func_0x002c56a4(param_2,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    return;
  }
  apbStack_c0[0] = (byte *)0x0;
  apbStack_c0[1] = (byte *)0x0;
  apbStack_c0[2] = (byte *)0x0;
  apbStack_c0[3] = (byte *)0x0;
  apbStack_c0[4] = (byte *)0x0;
  apbStack_c0[5] = (byte *)0x0;
  apbStack_c0[6] = (byte *)0x0;
  if (uVar9 < 4) {
    iVar10 = 0;
    do {
      apbStack_c0[iVar10] = param_1 + iVar10 * 0x10 + 0x10;
      uVar9 = uVar9 - 1 & 0xff;
      iVar10 = iVar10 + 1;
    } while (uVar9 != 0);
  }
  else {
    apbStack_c0[0] = param_1 + uVar9 * 0x10;
    apbStack_c0[1] = param_1 + uVar9 * 0x10 + -0x10;
    bVar1 = param_1[0x13];
    uVar11 = 0;
    if (0 < (int)(uVar9 - 3)) {
      pbVar7 = param_1 + 0x13;
      iVar10 = 0;
      bVar6 = bVar1;
      if (((uVar9 ^ 0xfffffffd) & 1) != 0) {
        bVar2 = param_1[0x23];
        pbVar7 = param_1 + 0x23;
        if (bVar1 < bVar2) {
          bVar6 = bVar2;
        }
        uVar11 = (uint)(bVar1 < bVar2);
        iVar10 = 1;
      }
      bVar1 = pbVar7[0x10];
      for (iVar8 = (int)(uVar9 - 3) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        bVar2 = pbVar7[0x20];
        if (bVar6 < bVar1) {
          uVar11 = iVar10 + 1;
          bVar6 = bVar1;
        }
        bVar1 = pbVar7[0x30];
        if (bVar6 < bVar2) {
          uVar11 = iVar10 + 2;
          bVar6 = bVar2;
        }
        iVar10 = iVar10 + 2;
        pbVar7 = pbVar7 + 0x20;
      }
    }
    apbStack_c0[2] = param_1 + uVar11 * 0x10 + 0x10;
  }
  uVar9 = 0;
  if (*param_1 != 0) {
    do {
      if (2 < uVar9) {
        return;
      }
      pbVar7 = apbStack_c0[uVar9];
      fStack_74 = (float)VectorUnsignedToFloat((uint)*pbVar7,(byte)(in_fpscr >> 0x15) & 3);
      fStack_74 = fStack_74 * fVar3;
      fStack_70 = (float)VectorUnsignedToFloat((uint)pbVar7[1],(byte)(in_fpscr >> 0x15) & 3);
      fStack_70 = fStack_70 * fVar3;
      fStack_6c = (float)VectorUnsignedToFloat((uint)pbVar7[2],(byte)(in_fpscr >> 0x15) & 3);
      fStack_6c = fStack_6c * fVar3;
      uStack_68 = uVar4;
      if (uVar9 == 0) {
        func_0x0033d174(param_2,0,&fStack_74,pfVar12,&uStack_84,&uStack_94);
      }
      else {
        func_0x0033d174(param_2,uVar9,&fStack_74,pfVar12,apbStack_c0 + 7,apbStack_c0 + 7);
      }
      fStack_cc = (float)VectorSignedToFloat((int)(char)pbVar7[8],(byte)(in_fpscr >> 0x15) & 3);
      fStack_cc = fStack_cc * fVar5;
      fStack_c8 = (float)VectorSignedToFloat((int)(char)pbVar7[9],(byte)(in_fpscr >> 0x15) & 3);
      fStack_c8 = fStack_c8 * fVar5;
      fStack_c4 = (float)VectorSignedToFloat((int)(char)pbVar7[10],(byte)(in_fpscr >> 0x15) & 3);
      fStack_c4 = fStack_c4 * fVar5;
      func_0x0033d14c(param_2,uVar9,&fStack_cc);
      func_0x0033d200(param_2,uVar9);
      uVar9 = uVar9 + 1 & 0xff;
      pfVar12 = pfVar12 + 4;
    } while (uVar9 < *param_1);
    if (2 < uVar9) {
      return;
    }
  }
  do {
    func_0x002c56a4(param_2,uVar9);
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 < 3);
  return;
}
