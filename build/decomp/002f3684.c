// OoT3D decomp @ 002f3684  name=FUN_002f3684  size=100

void FUN_002f3684(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 auStack_218 [524];

  puVar1 = DAT_002f36e8;
  FUN_0031b99c(DAT_002f36e8[1]);
  iVar2 = DAT_002f36ec;
  *(undefined2 *)(DAT_002f36ec + 0x20) = 0;
  uVar3 = FUN_002faf90(iVar2,0x22,0);
  *(undefined2 *)(iVar2 + 0x20) = uVar3;
  FUN_00324f44(auStack_218,*puVar1,DAT_002f36f0);
  uVar4 = FUN_002e613c(auStack_218,iVar2,0x22,1);
  puVar1[1] = uVar4;
  return;
}
