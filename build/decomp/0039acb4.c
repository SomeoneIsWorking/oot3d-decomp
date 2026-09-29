// OoT3D decomp @ 0039acb4  name=FUN_0039acb4  size=156

void FUN_0039acb4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;

  iVar4 = *(int *)(DAT_0039ad50 + param_2);
  fVar6 = *(float *)(param_1 + 0xbd4);
  sVar1 = *(short *)(iVar4 + 0xbe);
  fVar5 = (float)FUN_002cfca0((int)sVar1);
  *(float *)(param_1 + 0x28) = *(float *)(iVar4 + 0x28) + fVar6 * fVar5;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
  fVar5 = (float)FUN_00338f60((int)sVar1);
  uVar3 = DAT_0039ad58;
  uVar2 = DAT_0039ad54;
  *(float *)(param_1 + 0x30) = *(float *)(iVar4 + 0x30) + fVar6 * fVar5;
  uVar7 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = uVar2;
  FUN_00376340(DAT_0039ad60,DAT_0039ad5c,uVar3,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar7;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  return;
}
