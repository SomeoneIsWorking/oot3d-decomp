// OoT3D decomp @ 0042bf00  name=FUN_0042bf00  size=364

void FUN_0042bf00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;

  iVar2 = DAT_0042c074;
  uVar1 = DAT_0042c070;
  fVar7 = DAT_0042c06c;
  iVar5 = *(int *)(DAT_0042c074 + 0x5c) + 1;
  *(int *)(DAT_0042c074 + 0x5c) = iVar5;
  if (8 < iVar5) {
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) ^ 1;
  }
  fVar3 = DAT_0042c078;
  if (param_1 == 0) {
LAB_0042bf60:
    fVar7 = DAT_0042c078;
  }
  else if (*(int *)(iVar2 + 0x58) == 0) {
    if ((*(short *)(DAT_0042c09c + 0x5e) != 0 && *(short *)(DAT_0042c09c + 0x5e) != 10) ||
       (*(short *)(DAT_0042c09c + 0x62) != 0)) {
      fVar7 = DAT_0042c0a0;
    }
  }
  else if (*(int *)(iVar2 + 0x58) == 1) goto LAB_0042bf60;
  if ((*(int *)(iVar2 + 0x60) == 0) && (iVar5 = FUN_002fcdd4(), iVar5 == 0)) {
    if (((*DAT_0042c07c & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0042c07c), iVar5 != 0)) {
      FUN_0036788c(DAT_0042c080);
    }
    uVar4 = *(uint *)(DAT_0042c08c + 0x2d4);
    bVar6 = *(char *)(uVar4 + 0xd) == '\0';
    if (!bVar6) {
      uVar4 = (uint)*(byte *)(uVar4 + 8);
    }
    local_48 = fVar7;
    if ((bVar6 || uVar4 == 0) || uVar4 == 0x11) goto LAB_0042bfe8;
  }
  local_48 = fVar3;
LAB_0042bfe8:
  local_3c = local_48 + DAT_0042c094;
  local_44 = uVar1;
  local_40 = DAT_0042c090;
  local_38 = uVar1;
  local_34 = DAT_0042c090;
  local_2c = DAT_0042c098;
  local_28 = DAT_0042c090;
  local_20 = DAT_0042c098;
  local_1c = DAT_0042c090;
  local_30 = local_48;
  local_24 = local_3c;
  FUN_002f2c54(*(undefined4 *)(iVar2 + 0x18),&local_48,4);
  return;
}
