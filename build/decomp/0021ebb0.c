// OoT3D decomp @ 0021ebb0  name=FUN_0021ebb0  size=460

void FUN_0021ebb0(int param_1,char *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  uVar2 = DAT_0021ed80;
  fVar1 = DAT_0021ed7c;
  if ((*param_2 == '\0') && (param_2[6] != '\0')) {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x53f0),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_0021ed7c;
    FUN_003695cc(DAT_0021ed80,uVar6,8,4,0);
    uVar3 = DAT_0021ed8c;
    fVar8 = fVar7 * DAT_0021ed84;
    fVar9 = fVar7 * DAT_0021ed88;
    FUN_003695cc(DAT_0021ed8c,fVar9,fVar8,uVar2,uVar6,1,4,0);
    FUN_003695cc(uVar3,fVar9,fVar8,uVar2,uVar6,0xf,4,0);
    FUN_003695cc(uVar3,fVar9,fVar8,uVar2,uVar6,0x13,4,0);
    FUN_003695cc(fVar7 * DAT_0021ed94,fVar7 * DAT_0021ed90,fVar7,uVar2,uVar6,0x17,4,0);
  }
  uVar3 = DAT_0021eda0;
  if (*(int *)(DAT_0021ed98 + 0x4e8) == 5) {
    *DAT_0021ed9c = 1;
    puVar5 = DAT_0021edb0;
    puVar4 = DAT_0021eda4;
    *DAT_0021eda4 = uVar3;
    puVar4[1] = DAT_0021eda8;
    puVar4[2] = DAT_0021edac;
    *puVar5 = 0xb9;
    puVar5 = DAT_0021edbc;
    *DAT_0021edb8 = DAT_0021edb4;
    *puVar5 = 200;
  }
  if ((param_2[6] != '\0') && (*param_2 == '\x01')) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x53f2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(uVar2,uVar2,uVar2,fVar7 * fVar1,*(undefined4 *)(param_2 + 0xc),0x18,4,0);
    return;
  }
  return;
}
