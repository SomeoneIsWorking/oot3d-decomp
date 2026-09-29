// OoT3D decomp @ 0034c128  name=FUN_0034c128  size=252

void FUN_0034c128(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;

  uVar1 = DAT_0034c228;
  iVar5 = DAT_0034c224;
  if (((*(uint *)(DAT_0034c224 + 0x84) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0034c224 + 0x84), puVar3 = DAT_0034c230, uVar2 = DAT_0034c22c,
     iVar4 != 0)) {
    *DAT_0034c230 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 0x80) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0034c234), puVar3 = DAT_0034c23c, uVar2 = DAT_0034c238, iVar5 != 0))
  {
    *DAT_0034c23c = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  local_1c = 200;
  local_1b = 0xa0;
  local_1a = 0x78;
  local_20 = 0x82;
  local_1f = 0x5a;
  local_1e = 0x32;
  FUN_00374280(param_1,param_2,DAT_0034c23c + -3,DAT_0034c23c,&local_1c,&local_20);
  return;
}
