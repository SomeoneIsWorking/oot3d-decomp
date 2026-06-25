// OoT3D decomp @ 002be4c4  name=FUN_002be4c4  size=348

void FUN_002be4c4(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  uVar2 = DAT_002be654;
  fVar1 = DAT_002be624;
  fVar7 = *(float *)(param_1 + 0x2254) - DAT_002be620;
  iVar3 = DAT_002be634 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
  uVar5 = *(uint *)(DAT_002be638 + param_1);
  if (fVar7 < DAT_002be624) {
    fVar7 = fVar7 + DAT_002be628;
  }
  if ((int)fVar7 < DAT_002be62c) {
    if (((uVar5 & 0x200) == 0) &&
       (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_002be630 < 'Q')) || ((uVar5 & 0x400) != 0))
       )) {
      uVar6 = *(undefined4 *)(iVar3 + 0x1f8);
    }
    else {
      uVar6 = *(undefined4 *)(iVar3 + 0x228);
    }
    fVar7 = DAT_002be63c - fVar7;
    uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_002be624 <= fVar7) << 0x1d;
    fVar8 = DAT_002be644;
    if (!SUB41(uVar5 >> 0x1d,0)) {
      fVar7 = fVar7 * DAT_002be640;
    }
  }
  else {
    if (((uVar5 & 0x200) == 0) &&
       (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_002be630 < 'Q')) || ((uVar5 & 0x400) != 0))
       )) {
      uVar6 = *(undefined4 *)(iVar3 + 0x210);
    }
    else {
      uVar6 = *(undefined4 *)(iVar3 + 0x240);
    }
    fVar7 = DAT_002be648 - fVar7;
    uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_002be624 <= fVar7) << 0x1d;
    fVar8 = DAT_002be650;
    if (!SUB41(uVar5 >> 0x1d,0)) {
      fVar7 = fVar7 * DAT_002be64c;
    }
  }
  uVar4 = FUN_003603c0(param_1 + 0x254,uVar6);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
  FUN_00360190(uVar2,fVar1,uVar4,fVar7 * fVar8 * DAT_002be658,param_1 + 0x254,param_2,uVar6,2);
  *(undefined2 *)(DAT_002be65c + param_1) = *(undefined2 *)(param_1 + 0xbe);
  return;
}

