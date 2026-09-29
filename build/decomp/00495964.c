// OoT3D decomp @ 00495964  name=FUN_00495964  size=88

undefined4 FUN_00495964(int param_1)

{
  char cVar1;
  int iVar2;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar3;
  undefined4 unaff_r6;
  undefined1 *puVar4;
  undefined4 unaff_lr;

  iVar2 = FUN_00306994();
  cVar1 = *(char *)(param_1 + 4);
  puVar4 = &stack0xfffffff8;
  uVar3 = 0x495970;
  if ((((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x06') && cVar1 != '\a') &&
      cVar1 != '\x01') {
    param_1 = unaff_r4;
    puVar4 = (undefined1 *)register0x00000054;
    uVar3 = unaff_lr;
  }
  if ((((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x06') || cVar1 == '\a') ||
      cVar1 == '\x01') {
    return 0;
  }
  *(undefined4 *)(puVar4 + -4) = uVar3;
  *(undefined4 *)(puVar4 + -8) = unaff_r6;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r5;
  *(int *)(puVar4 + -0x10) = param_1;
  FUN_00306a34(iVar2 + 0x16c);
  uVar3 = *(undefined4 *)(iVar2 + 0x160);
  FUN_003069cc(iVar2 + 0x16c);
  return uVar3;
}
