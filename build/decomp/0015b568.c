// OoT3D decomp @ 0015b568  name=FUN_0015b568  size=508

void FUN_0015b568(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x3ed));
  if (iVar2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    bVar1 = *(byte *)(param_1 + 0x3ed);
    uVar5 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x16) >> 0x1d;
    *(byte *)(param_1 + 0x1e) = bVar1;
    if ((bVar1 < 0x13) &&
       (iVar2 = param_2 + (uint)bVar1 * 0x80, *(int *)(DAT_0015b764 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x3c8) = iVar2 + 0x10;
    uVar3 = ObjectBankArchive_00358ef8
                      (iVar2 + 0x10,*(undefined1 *)(DAT_0015b768 + *(char *)(param_1 + 0x3ee)));
    FUN_00358ea8(*(undefined4 *)(param_1 + 0x3c8),param_2,param_1 + 0x1a4,uVar3,
                 *(undefined4 *)(param_1 + 0x178),
                 *(undefined1 *)(DAT_0015b770 + *(char *)(param_1 + 0x3ee) * 4),param_1 + 0x228,
                 param_1 + 0x2f8,*(undefined1 *)(DAT_0015b76c + *(char *)(param_1 + 0x3ee)));
    *(undefined4 *)(param_1 + 0x3e4) = DAT_0015b774;
    if (uVar5 == 6) {
      if (*(ushort *)(DAT_0015b778 + 0xc) - 0xc001 < DAT_0015b77c) {
        uVar5 = 3;
      }
      else {
        uVar5 = 5;
      }
    }
    *(undefined2 *)(param_1 + 0x36) = 0;
    if (uVar5 == 1) {
      iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 1000) = 0xf;
        FUN_00353214(param_1 + 0x3cc,param_1,param_2,0);
      }
    }
    else if (uVar5 == 4) {
      iVar2 = FUN_00357eac(param_1,*(undefined4 *)(DAT_0015b780 + param_2));
      if (DAT_0015b784 < iVar2) {
        *(undefined4 *)(param_1 + 0x3e4) = DAT_0015b788;
        *(undefined2 *)(param_1 + 0x36) = 0xe800;
      }
    }
    else if (uVar5 == 5) {
      sVar4 = (*(ushort *)(param_1 + 0x1c) & 0x3f) + 0x200;
      *(short *)(param_1 + 0x116) = sVar4;
      if ((sVar4 == 0x229) && ((*(ushort *)(DAT_0015b78c + 0xee) & 0x10) == 0)) {
        uVar5 = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0x3e4) = DAT_0015b790;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x8000009;
      }
    }
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfc7f | (ushort)(uVar5 << 7);
  }
  return;
}
