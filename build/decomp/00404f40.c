// OoT3D decomp @ 00404f40  name=FUN_00404f40  size=324

void FUN_00404f40(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined4 local_24;

  *(undefined1 *)(param_4 + 0x4b8) = 0;
  if (param_1 == 0) {
    FUN_003102dc(param_4,0);
    return;
  }
  FUN_0030b5cc(auStack_28,*(undefined4 *)(param_2 + 4));
  iVar2 = FUN_0030c550();
  iVar3 = FUN_0030c20c(iVar2,7);
  iVar5 = param_4 + 0xf4;
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x180);
  *(undefined1 *)(iVar3 + 4) = 0xd;
  *(int *)(iVar3 + 0x10) = iVar5;
  *(undefined4 *)(iVar3 + 0x14) = local_24;
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_4 + 500);
  FUN_0030c1e8(iVar2);
  iVar2 = *(int *)(param_4 + 0x1fc);
  if (0 < iVar2) {
    bVar1 = *(byte *)(param_4 + 0x1f8);
    iVar3 = FUN_0030c550();
    iVar4 = FUN_0030c20c(iVar3,7);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x180);
    *(undefined1 *)(iVar4 + 4) = 0xf;
    *(uint *)(iVar4 + 0x14) = (uint)bVar1;
    *(int *)(iVar4 + 0x18) = iVar2;
    *(int *)(iVar4 + 0x10) = iVar5;
    FUN_0030c1e8(iVar3);
  }
  *(undefined1 *)(param_4 + 0x4b9) = 1;
  iVar2 = FUN_0030c550();
  iVar3 = FUN_0030c20c(iVar2,9);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x180);
  *(undefined1 *)(iVar3 + 4) = 0xe;
  *(int *)(iVar3 + 0x10) = iVar5;
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_3 + 0x1c);
  FUN_0030c1e8(iVar2,iVar3);
  *(int *)(param_4 + 300) = param_4 + 600;
  return;
}
