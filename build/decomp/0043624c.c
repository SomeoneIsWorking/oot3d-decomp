// OoT3D decomp @ 0043624c  name=FUN_0043624c  size=280

void FUN_0043624c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;

  *param_1 = param_2;
  param_1[8] = param_5 & 0xff;
  param_1[6] = param_3;
  param_1[7] = param_4;
  FUN_002ea6e0(param_1 + 3,4);
  pcVar1 = DAT_004362fc;
  if (*DAT_004362fc == '\0') {
    FUN_002ea6e0(DAT_00436300,4);
    *pcVar1 = '\x01';
  }
  puVar5 = DAT_00436300;
  iVar4 = 0;
  do {
    iVar4 = FUN_002ea6c8(DAT_00436300,iVar4);
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_004362e4;
    }
    bVar7 = param_1 <= *(undefined4 **)(iVar4 + 0x18);
    if (*(undefined4 **)(iVar4 + 0x18) <= param_1) {
      bVar7 = *(undefined4 **)(iVar4 + 0x1c) <= param_1;
    }
  } while (bVar7);
  iVar2 = FUN_002ea674(iVar4 + 0xc,param_1);
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
LAB_004362e4:
  if (iVar4 != 0) {
    puVar5 = (uint *)(iVar4 + 0xc);
  }
  puVar3 = (uint *)((uint)*(ushort *)((int)puVar5 + 10) + (int)param_1);
  if (*puVar5 != 0) {
    uVar6 = puVar5[1];
    puVar3[1] = 0;
    *puVar3 = uVar6;
    *(undefined4 **)(puVar5[1] + (uint)*(ushort *)((int)puVar5 + 10) + 4) = param_1;
    puVar5[1] = (uint)param_1;
    *(short *)(puVar5 + 2) = (short)puVar5[2] + 1;
    return;
  }
  puVar3[1] = 0;
  *puVar3 = 0;
  *puVar5 = (uint)param_1;
  puVar5[1] = (uint)param_1;
  *(short *)(puVar5 + 2) = (short)puVar5[2] + 1;
  return;
}
