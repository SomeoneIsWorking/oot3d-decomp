// OoT3D decomp @ 003d6f18  name=FUN_003d6f18  size=504

void FUN_003d6f18(short *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  float fVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;

  iVar6 = FUN_003731e0(param_1 + 0xd2);
  uVar1 = DAT_003d7118;
  local_34 = DAT_003d7114;
  local_38 = DAT_003d7110;
  if (iVar6 == 0) {
    iVar6 = FUN_003736fc(DAT_003d7134,DAT_003d7130,param_1 + 0xd2);
    if (iVar6 != 0) {
      FUN_00375bcc(param_1,DAT_003d7138);
      return;
    }
  }
  else if ((*(char *)((int)param_1 + 0xb7) == '\0') && (*(char *)((int)param_1 + 0xe0d) != '\0')) {
    local_30 = DAT_003d7110;
    bVar5 = *(char *)((int)param_1 + 0xe0d) - 1;
    *(byte *)((int)param_1 + 0xe0d) = bVar5;
    fVar4 = DAT_003d7124;
    uVar3 = DAT_003d7120;
    uVar2 = DAT_003d711c;
    if ((uint)((ulonglong)(uint)bVar5 * (ulonglong)uVar1 >> 0x21) * -3 + (uint)bVar5 != 0) {
      local_30 = local_38;
      for (iVar6 = 0xc - (uint)(bVar5 >> 1); -1 < iVar6; iVar6 = iVar6 + -1) {
        local_2c = (float)FUN_003738a8(uVar2);
        local_2c = local_2c + *(float *)(param_1 + 0x14);
        local_24 = (float)FUN_003738a8(uVar2);
        local_24 = local_24 + *(float *)(param_1 + 0x18);
        fVar7 = (float)FUN_003738a8(uVar3);
        local_28 = fVar7 + fVar4 + *(float *)(param_1 + 0x16);
        FUN_003642f4(param_2,&local_2c,&local_38,&local_38,100,0,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb,
                     1);
      }
    }
    if (*(char *)((int)param_1 + 0xe0d) == '\0') {
      FUN_00374444(param_2,param_1,param_1 + 0x14,0xb0);
      if (*(short *)(DAT_003d7128 + (int)param_1) != 0xff) {
        FUN_00375c10(param_2);
        iVar6 = FUN_00379cac(param_2 + 0x208c,(int)*param_1,(char)param_1[1]);
        if (iVar6 < 2) {
          *(uint *)(*(int *)(DAT_003d712c + param_2) + 0x29b8) =
               *(uint *)(*(int *)(DAT_003d712c + param_2) + 0x29b8) | 0x3000000;
          *(undefined1 *)(param_1 + 0x70a) = 1;
        }
      }
      FUN_00374428(param_1);
    }
  }
  return;
}
