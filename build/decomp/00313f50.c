// OoT3D decomp @ 00313f50  name=FUN_00313f50  size=204

void FUN_00313f50(float param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;

  uVar6 = in_fpscr & 0xfffffff | (uint)(param_1 == DAT_0031401c) << 0x1e;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar2 = FUN_00307ac0((float)param_2[1] - (float)param_2[2]);
    fVar7 = (float)param_2[1];
    uVar5 = 1;
    if ((char)param_2[6] == '\0') {
      uVar3 = FUN_00307ac0(fVar7);
    }
    else {
      fVar8 = (float)VectorSignedToFloat((1 << (param_2[7] & 0xffU)) + -1,(byte)(uVar6 >> 0x15) & 3)
      ;
      uVar3 = FUN_00307ac0((fVar7 - (fVar7 - (float)param_2[2]) * (float)param_2[5]) / fVar8);
    }
  }
  else {
    uVar2 = FUN_00307ac0(-param_1);
    uVar3 = 0;
    uVar5 = 0;
  }
  uVar1 = DAT_00314020;
  puVar4 = *(undefined4 **)(*param_2 + 8);
  *puVar4 = uVar2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar3;
  puVar4[3] = 0;
  uVar2 = DAT_00314024;
  puVar4[4] = uVar5;
  puVar4[5] = uVar2;
  *(undefined4 **)(*param_2 + 8) = puVar4 + 6;
  return;
}
