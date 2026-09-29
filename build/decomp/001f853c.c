// OoT3D decomp @ 001f853c  name=FUN_001f853c  size=524

void FUN_001f853c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  *(undefined4 *)(param_1 + 0x2a60) = 0;
  *(undefined4 *)(param_1 + 0x2a5c) = 0;
  *(undefined4 *)(param_1 + 0x2a58) = 0;
  *(undefined2 *)(param_1 + 0x2a66) = 0;
  *(undefined2 *)(param_1 + 0x2a64) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 2;
  *(undefined1 *)(param_1 + 0x1aa) = 3;
  *(undefined1 *)(param_1 + 0x1a9) = 3;
  FUN_0033b504(param_1,2);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001f8748 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x24e0) = *(undefined4 *)(*(int *)(DAT_001f874c + param_2) + 0x24e0);
  uVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,0);
  *(undefined4 *)(param_1 + 0x24dc) = uVar2;
  (**(code **)(param_2 + 0x5b90))(param_1,param_2,uVar2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x27c),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x27c),3);
  puVar3 = (undefined4 *)(param_1 + 0x24f0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x24f4) = 0;
    *(undefined4 *)(param_1 + 0x24f8) = 0;
    *(undefined4 *)(param_1 + 0x24fc) = 0;
    *(undefined4 *)(param_1 + 0x2500) = 0;
    *(undefined4 *)(param_1 + 0x2504) = 0;
    *(undefined4 *)(param_1 + 0x24f4) = 0;
    uVar2 = DAT_001f8750;
    *(undefined4 *)(param_1 + 0x24f8) = 0;
    *(undefined4 *)(param_1 + 0x24fc) = 0;
    *(undefined4 *)(param_1 + 0x2500) = 0;
    *puVar3 = uVar2;
    *(undefined4 *)(param_1 + 0x2504) = 0;
  }
  *(int *)(param_1 + 0x24fc) = param_1 + 0x254;
  *(int *)(param_1 + 0x24f4) = param_1;
  *(int *)(param_1 + 0x24f8) = param_2;
  FUN_0034775c(param_1 + 0x254,puVar3);
  *(undefined1 *)(param_1 + 0x123) = 0x26;
  *(undefined1 *)(param_1 + 0x1321) = 9;
  *(undefined1 *)(param_1 + 0x13f8) = 0x11;
  *(undefined1 *)(param_1 + 0x1378) = 0x11;
  *(undefined1 *)(param_1 + 0x13f9) = 0xd;
  *(undefined1 *)(param_1 + 0x1379) = 0xd;
  *(undefined1 *)(param_1 + 0x13fc) = 9;
  *(undefined1 *)(param_1 + 0x137c) = 9;
  *(undefined1 *)(param_1 + 0x1405) = 8;
  *(undefined1 *)(param_1 + 0x1385) = 8;
  *(undefined1 *)(param_1 + 0x1416) = 1;
  *(undefined1 *)(param_1 + 0x1396) = 1;
  *(undefined1 *)(param_1 + 0x1578) = 0x11;
  *(undefined1 *)(param_1 + 0x1579) = 0xd;
  uVar2 = DAT_001f875c;
  iVar1 = DAT_001f8758;
  *(undefined4 *)(param_1 + 0xa0) = DAT_001f8754;
  *(char *)(param_1 + 0xb7) = (char)((int)(uint)*(ushort *)(iVar1 + 0x42) >> 3);
  *(undefined2 *)(param_1 + 0xb0) = 0x3c;
  *(undefined2 *)(param_1 + 0xb2) = 100;
  (**(code **)(param_2 + 0x5ba8))(uVar2,param_1,param_2);
  uVar2 = DAT_001f8760;
  *(undefined1 *)(param_1 + 0x2a9d) = 0;
  *(undefined1 *)(param_1 + 0x2aa0) = 0;
  *(undefined4 *)(param_1 + 0x2a90) = uVar2;
  *(undefined1 *)(param_1 + 0x2a98) = 0;
  *(undefined1 *)(param_1 + 0x2a9b) = 0;
  *(undefined1 *)(param_1 + 0x2a9c) = 0;
  *(undefined1 *)(param_1 + 0x2a9f) = 0;
  *(undefined1 *)(param_1 + 0x2aa2) = 0;
  *(undefined1 *)(param_1 + 0x2aa1) = 0;
  *(undefined1 *)(param_1 + 0x2aa3) = 0;
  *(undefined1 *)(param_1 + 0x2aa4) = 0x5f;
  *(undefined4 *)(param_1 + 0x2a4c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x2a50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x2a54) = *(undefined4 *)(param_1 + 0x10);
  return;
}
