// OoT3D decomp @ 0023fd30  name=FUN_0023fd30  size=300

void FUN_0023fd30(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;

  pcVar1 = DAT_0023fe5c;
  if (*(int *)(param_1 + 0x124) == 0) {
    if ((*(byte *)(param_1 + 0x22a) & 2) == 0) {
      if ((*(byte *)(param_1 + 0x282) & 2) == 0) goto LAB_0023fe48;
      puVar4 = *(ushort **)(param_1 + 0x27c);
    }
    else {
      puVar4 = *(ushort **)(param_1 + 0x224);
    }
    *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x22a) & 0xfd;
    *(byte *)(param_1 + 0x282) = *(byte *)(param_1 + 0x282) & 0xfd;
    piVar3 = DAT_0023fe64;
    uVar2 = DAT_0023fe60;
    uVar6 = (ushort)(byte)puVar4[1];
    bVar7 = uVar6 == 3;
    if (bVar7) {
      uVar6 = *puVar4;
    }
    bVar8 = bVar7 && uVar6 == 0x10;
    if (bVar7 && uVar6 == 0x10) {
      bVar8 = puVar4[0xe] == 0;
    }
    if (bVar8) {
      *(ushort **)(param_1 + 0x124) = puVar4;
      *(undefined4 *)(puVar4 + 0x36) = uVar2;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      puVar4[0x136] = (ushort)(int)(DAT_0023fe68 / fVar9 + DAT_0023fe6c);
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
    }
  }
  else {
    *(int *)(DAT_0023fe5c + 4) = *(int *)(DAT_0023fe5c + 4) + 1;
    FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    if ((*pcVar1 == '\0') && (0x8c < *(int *)(pcVar1 + 4))) {
      iVar5 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
      else {
        *pcVar1 = *pcVar1 + '\x01';
      }
    }
  }
LAB_0023fe48:
                    /* WARNING: Could not recover jumptable at 0x0023fe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x2c8))(param_1,param_2);
  return;
}
