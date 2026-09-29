// OoT3D decomp @ 002fa198  name=FUN_002fa198  size=124

void FUN_002fa198(undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = FUN_0044b204(*(undefined4 *)(DAT_002fa214 + 0x9c),param_1);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_002fa218,0,&DAT_002fa218);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_002fa21c >> 0x1b;
  if ((*DAT_002fa21c & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}
