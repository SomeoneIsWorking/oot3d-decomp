// OoT3D decomp @ 0032d314  name=FUN_0032d314  size=308

void FUN_0032d314(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;

  fVar1 = DAT_0032d44c;
  iVar3 = *(int *)(DAT_0032d448 + param_2);
  if ((*(ushort *)(param_1 + 0x9c4) & 0x10) != 0) {
    local_40 = *(float *)(param_2 + 0x20f8);
    local_3c = *(float *)(&DAT_000020fc + param_2);
    local_38 = *(float *)(param_2 + 0x2100);
    iVar2 = *(int *)(DAT_0032d450 + iVar3);
    if ((iVar2 == 0 || iVar2 == iVar3) || iVar2 == param_1) {
      fVar4 = (float)FUN_002cfca0((int)*(short *)(iVar3 + 0xbe));
      local_40 = *(float *)(iVar3 + 0x2394) + fVar4 * fVar1;
      local_3c = *(float *)(iVar3 + 0x2398) + DAT_0032d454;
      fVar4 = (float)FUN_00338f60((int)*(short *)(iVar3 + 0xbe));
      local_38 = *(float *)(iVar3 + 0x239c) + fVar4 * fVar1;
    }
    *(float *)(param_1 + 0x3c) = local_40;
    *(float *)(param_1 + 0x40) = local_3c;
    *(float *)(param_1 + 0x44) = local_38;
    *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) & 0xffef;
  }
  FUN_003614e0(param_1,param_2);
  local_34 = *(float *)(param_1 + 0x3c);
  uStack_30 = *(undefined4 *)(param_1 + 0x40);
  uStack_2c = *(undefined4 *)(param_1 + 0x44);
  FUN_00361040(DAT_0032d45c,fVar1,DAT_0032d458,param_1,&local_34);
  if (DAT_0032d460 <= *(int *)(param_1 + 0x6c)) {
    FUN_003612fc(param_1,param_2,0x10);
  }
  FUN_0036e168(DAT_0032d470,DAT_0032d46c,DAT_0032d468,DAT_0032d464,param_1 + 0x54);
  FUN_00360d9c(param_1,param_2);
  return;
}
