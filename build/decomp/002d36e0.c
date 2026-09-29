// OoT3D decomp @ 002d36e0  name=FUN_002d36e0  size=196

int FUN_002d36e0(undefined1 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;

  iVar3 = DAT_002d37a4;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0xa0) & 7;
  if (uVar2 == 0) {
    uVar5 = FUN_002ce2e8(0x400);
  }
  else {
    puVar4 = param_2;
    if (uVar2 != 2) goto LAB_002d374c;
    uVar5 = FUN_002ce2e8(0x200);
  }
  puVar4 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    return 0;
  }
LAB_002d374c:
  *(undefined1 *)(iVar3 + 0xe) = 3;
  *(undefined1 *)(iVar3 + 0x14) = param_1;
  iVar3 = FUN_002dbe88(DAT_002d37a8,puVar4,*(undefined4 *)(iVar3 + 0xd0),
                       *(undefined4 *)(iVar3 + 0xd4));
  if ((iVar3 == 0) && (uVar1 = FUN_0030d69c(0,0,0,0,0), param_2 != (undefined1 *)0x0)) {
    *param_2 = uVar1;
  }
  return iVar3;
}
