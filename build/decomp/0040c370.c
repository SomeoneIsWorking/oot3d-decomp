// OoT3D decomp @ 0040c370  name=FUN_0040c370  size=156

int FUN_0040c370(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;

  if (param_3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
    *(uint *)(param_1 + 0xc) = (uint)*param_2;
  }
  if (-1 < iVar2) {
    pbVar4 = param_2 + iVar2;
    if (param_3 == iVar2) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 + 1;
      *(uint *)(param_1 + 0x10) = (uint)*pbVar4;
    }
  }
  if (-1 < iVar2) {
    if (3 < (uint)(param_3 - iVar2)) {
      uVar3 = *(uint *)(param_2 + iVar2);
      bVar1 = *(byte *)((int)(param_2 + iVar2) + 3);
      *(uint *)(param_1 + 0x14) =
           ((uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8) >> 8) + 1;
      *(uint *)(param_1 + 0x18) = bVar1 + 1;
      return iVar2 + 4;
    }
    iVar2 = -1;
  }
  return iVar2;
}
