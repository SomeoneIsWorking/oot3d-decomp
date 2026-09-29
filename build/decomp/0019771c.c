// OoT3D decomp @ 0019771c  name=FUN_0019771c  size=640

void FUN_0019771c(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;

  iVar5 = DAT_001979a4;
  pcVar2 = DAT_001979a0;
  iVar7 = *(int *)(DAT_0019799c + param_2);
  cVar1 = *DAT_001979a0;
  if (cVar1 == '\x0f') {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001979a8;
    cVar1 = *(char *)(param_1 + 0x1c0);
    bVar8 = cVar1 == '\0';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x1c1);
    }
    if (!bVar8 || cVar1 != '\0') {
      return;
    }
    iVar7 = z_actor_003738d0(*(float *)(param_1 + 0x28) + DAT_001979ac,
                             *(float *)(param_1 + 0x2c) - DAT_001979ac,
                             *(float *)(param_1 + 0x30) + DAT_001979ac,param_2 + 0x208c,param_2,0x91
                             ,0,(int)*(short *)(param_1 + 0xbe),0,
                             (int)(short)(*(short *)(param_1 + 0x1c) + 0x300),1);
    if (iVar7 != 0) {
      FUN_00371808(param_2,DAT_001979b0,0x1e,iVar7,0);
    }
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001979b4);
    *(undefined2 *)(iVar5 + 0x5e) = 10;
    return;
  }
  uVar6 = *(ushort *)(DAT_001979a4 + 0x60);
  bVar8 = uVar6 != 0;
  if (!bVar8) {
    uVar6 = (ushort)*(byte *)(param_2 + 0x7fc7);
  }
  if (bVar8 || uVar6 != 5) {
    if (cVar1 == '@') goto LAB_00197864;
    if (cVar1 != '\x10') goto LAB_001978b0;
  }
  else {
    *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
    *pcVar2 = '\x10';
    *(undefined1 *)(param_2 + 0x7fc7) = 0;
  }
  iVar5 = FUN_0036a7a0(param_2);
  if (iVar5 != 0) {
LAB_001978b0:
    fVar4 = DAT_001979c0;
    if (*(float *)(param_1 + 0x1a8) == DAT_001979c0) {
      *(undefined1 *)(param_1 + 0x1c2) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x1c2) != '\0') {
      *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
      *(float *)(param_1 + 0x1a8) = fVar4;
      if (*(char *)(param_1 + 0x1c2) != '\0') {
        *(char *)(param_1 + 0x1c2) = *(char *)(param_1 + 0x1c2) + -1;
      }
      return;
    }
    iVar5 = FUN_0036d288(param_2,param_1,0x1e,0x32,0xffffffec);
    if (iVar5 == 0) {
      *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
      *(float *)(param_1 + 0x1a8) = fVar4;
      return;
    }
    *(char *)(param_2 + 0x7fc7) = *(char *)(param_2 + 0x7fc7) + -1;
    fVar9 = DAT_001979c4;
    if (fVar4 <= *(float *)(param_1 + 0x1a8)) {
      fVar9 = DAT_001979c8;
    }
    *(char *)(param_1 + 0x1c2) = (char)(int)fVar9;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001979cc;
    return;
  }
LAB_00197864:
  uVar3 = DAT_001979b8;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  if (*pcVar2 != '\x10') {
    return;
  }
  *pcVar2 = '@';
  FUN_00375bcc(param_1,DAT_001979bc);
  FUN_0036e980(param_2,iVar7,8);
  return;
}
