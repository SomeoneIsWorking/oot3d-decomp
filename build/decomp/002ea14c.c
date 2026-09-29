// OoT3D decomp @ 002ea14c  name=FUN_002ea14c  size=84

void FUN_002ea14c(int param_1,undefined4 param_2,uint param_3)

{
  undefined2 uVar1;
  bool bVar2;

  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(uint *)(param_1 + 0x17c) = param_3 >> 2;
  *(undefined4 *)(param_1 + 0x178) = param_2;
  FUN_002ea1a0(param_1,param_1 + 0x34,0x20);
  *(int *)(param_1 + 0xb4) = param_1 + 0xe8;
  *(undefined4 *)(param_1 + 0xd4) = 0x20;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0xe0));
  } while (!bVar2);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0xe4));
  } while (!bVar2);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0xb8));
  } while (!bVar2);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined2 *)(param_1 + 0xbc));
  } while (!bVar2);
  *(undefined2 *)(param_1 + 0xbc) = 0;
  uVar1 = (undefined2)DAT_002ea274;
  *(undefined2 *)(param_1 + 0xbe) = uVar1;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0xc0));
  } while (!bVar2);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined2 *)(param_1 + 0xc4));
  } while (!bVar2);
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  do {
    bVar2 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 200));
  } while (!bVar2);
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}
