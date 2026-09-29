// OoT3D decomp @ 001bb494  name=FUN_001bb494  size=452

void FUN_001bb494(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;

  FUN_0037632c();
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xbb4);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001bb658,DAT_001bb658,DAT_001bb658,param_2,param_1,4);
  (**(code **)(param_1 + 0xbb0))(param_1);
  (**(code **)(param_1 + 0xbac))(param_1,param_2);
  if ((*(ushort *)(param_1 + 0xc3c) & 4) == 0) {
    (**(code **)(param_1 + 0xc0c))(param_1);
  }
  uVar3 = DAT_001bb66c;
  iVar5 = param_1 + 0xc36;
  if ((*(ushort *)(param_1 + 0xc3c) & 1) == 0) {
    FUN_00375a18(param_1 + 0xc30,0,6,DAT_001bb66c,100);
    FUN_00375a18(param_1 + 0xc32,0,6,uVar3,100);
    FUN_00375a18(iVar5,0,6,uVar3,100);
    FUN_00375a18(param_1 + 0xc38,0,6,uVar3,100);
  }
  else {
    iVar4 = *(int *)(param_1 + 0xbac);
    bVar6 = iVar4 != DAT_001bb65c;
    iVar1 = DAT_001bb65c;
    if (bVar6) {
      iVar1 = DAT_001bb660;
    }
    iVar2 = iVar1;
    if (bVar6 && iVar4 != iVar1) {
      iVar2 = DAT_001bb664;
    }
    if ((bVar6 && iVar4 != iVar1) && iVar4 != iVar2) {
      FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0xc30,iVar5,0x4300);
    }
    else {
      FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0xc30,iVar5,
                   DAT_001bb668);
    }
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xfffa;
  if (0 < *(short *)(param_1 + 0xc28)) {
    *(short *)(param_1 + 0xc28) = *(short *)(param_1 + 0xc28) + -1;
  }
  return;
}
