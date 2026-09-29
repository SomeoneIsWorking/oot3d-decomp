// OoT3D decomp @ 003740fc  name=FUN_003740fc  size=212

ushort FUN_003740fc(float param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;

  fVar3 = DAT_003741d0;
  if (param_1 == DAT_003741d0) {
    param_1 = DAT_003741d4;
    if (DAT_003741d0 <= *(float *)(param_2 + 0x6c)) {
      param_1 = DAT_003741d8;
    }
    fVar7 = DAT_003741dc;
    if (-1 < *(short *)(param_2 + 0x1c)) {
      fVar7 = DAT_003741e0;
    }
    param_1 = param_1 * fVar7;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined2 *)(param_2 + 0x90);
  fVar7 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x36));
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x36));
  *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + fVar7 * param_1;
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar8 * param_1;
  FUN_00376340(fVar3,fVar3,fVar3,param_3,param_2,0x1c);
  *(undefined4 *)(param_2 + 0x28) = uVar4;
  *(undefined4 *)(param_2 + 0x2c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = uVar6;
  uVar2 = *(ushort *)(param_2 + 0x90);
  *(undefined2 *)(param_2 + 0x90) = uVar1;
  return ~uVar2 & 1;
}
