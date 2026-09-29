// OoT3D decomp @ 0026b1dc  name=FUN_0026b1dc  size=12

void FUN_0026b1dc(float param_1,float param_2,float param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  int unaff_r4;
  uint unaff_r6;
  uint in_fpscr;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack00000000;
  float fStack00000004;
  float fStack00000008;
  uint uStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  uint uStack0000001c;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  uint uStack0000002c;

  uStack0000000c = param_4 ^ unaff_r6;
  uVar4 = VectorFloatToUnsigned(param_1,3);
  uVar5 = VectorFloatToUnsigned(param_2,3);
  fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorUnsignedToFloat(param_7 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1 = (float *)(DAT_0026bd88 + (param_7 & 0xff) * 0x10);
  fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar2 = (float *)(DAT_0026bd88 + (uVar4 & 0xff) * 0x10);
  fVar3 = *pfVar1 + (param_3 - fVar6) * pfVar1[2];
  fVar8 = pfVar1[1] + (param_3 - fVar6) * pfVar1[3];
  pfVar1 = (float *)(DAT_0026bd88 + (uVar5 & 0xff) * 0x10);
  fStack00000010 = pfVar2[1] + (param_1 - fVar7) * pfVar2[3];
  fStack00000020 = *pfVar2 + (param_1 - fVar7) * pfVar2[2];
  fVar6 = *pfVar1 + (param_2 - fVar9) * pfVar1[2];
  if (uStack0000000c != 0) {
    fVar3 = -fVar3;
  }
  fVar7 = pfVar1[1] + (param_2 - fVar9) * pfVar1[3];
  fStack00000028 = fVar8 * fStack00000010;
  if (param_5 != 0) {
    fStack00000020 = -fStack00000020;
  }
  fStack00000024 = fVar3 * fStack00000010;
  if (param_6 != 0) {
    fVar6 = -fVar6;
  }
  fStack00000000 = fVar7 * fStack00000010;
  fStack00000010 = fVar6 * fStack00000010;
  fStack00000004 = fVar3 * fVar7 * fStack00000020 - fVar8 * fVar6;
  fStack00000018 = fVar8 * fVar6 * fStack00000020 - fVar3 * fVar7;
  fStack00000008 = fVar3 * fVar6 + fVar8 * fVar7 * fStack00000020;
  fStack00000014 = fVar8 * fVar7 + fVar3 * fVar6 * fStack00000020;
  fStack00000020 = -fStack00000020;
  uStack0000001c = uStack0000000c;
  uStack0000002c = uStack0000000c;
  FUN_0036c174(unaff_r4 + 0x148,unaff_r4 + 0x148,&stack0x00000000);
  *(undefined1 *)(*(int *)(unaff_r4 + 0x204) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(unaff_r4 + 0x204),unaff_r4 + 0x148);
  FUN_00372170(*(undefined4 *)(unaff_r4 + 0x204),0);
  return;
}
