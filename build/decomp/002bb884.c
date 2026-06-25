// OoT3D decomp @ 002bb884  name=FUN_002bb884  size=40

undefined4 FUN_002bb884(int param_1)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = (ushort)*(byte *)(param_1 + 0x1a9);
  bVar2 = uVar1 == 5;
  if (bVar2) {
    uVar1 = *(ushort *)(DAT_002bb8ac + 0x4a);
  }
  if (!bVar2 || uVar1 != 0) {
    return 0;
  }
  return 1;
}

