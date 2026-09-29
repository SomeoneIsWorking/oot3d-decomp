// OoT3D decomp @ 00247338  name=FUN_00247338  size=324

void FUN_00247338(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;

  uVar4 = DAT_00247484;
  uVar3 = DAT_00247480;
  uVar2 = DAT_0024747c;
  uVar7 = 3;
  if (-1 < *(short *)(param_1 + 0x1c)) {
    bVar1 = *(byte *)(param_1 + 0x573);
    if (bVar1 != 0) {
      if (bVar1 < 0x15) {
        cVar5 = '\0';
      }
      else {
        cVar5 = bVar1 - 0x14;
      }
      *(char *)(param_1 + 0x573) = cVar5;
      return;
    }
LAB_00247468:
    FUN_00374428(param_1);
    return;
  }
  FUN_0036e168(DAT_0024747c,DAT_00247484,DAT_00247480,DAT_0024747c,param_1 + 0x55c);
  FUN_0036e168(uVar2,uVar4,uVar3,uVar2,param_1 + 0x560);
  if (*(int *)(param_1 + 0x534) == 0) {
    if (*(int *)(param_1 + 0x5fc) == 0) {
      FUN_00375e18(param_1 + 0x5f0,7,param_2);
    }
    if (*(char *)(param_1 + 0x57e) == '\a' || *(char *)(param_1 + 0x57e) == '\x05') {
      uVar7 = 0xb;
    }
    iVar6 = FUN_00364670(param_1,param_1 + 0x5f0,param_2,uVar7,0);
    if (iVar6 != 0) {
      FUN_00374444(param_2,param_1,param_1 + 0x28,0xd0);
      goto LAB_00247468;
    }
  }
  else {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + -1;
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -20000;
  }
  return;
}
