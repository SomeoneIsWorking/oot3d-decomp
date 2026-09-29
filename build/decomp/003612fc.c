// OoT3D decomp @ 003612fc  name=FUN_003612fc  size=192

void FUN_003612fc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  uVar1 = DAT_00361474;
  iVar5 = DAT_00361470;
  if (((*(uint *)(DAT_00361470 + 0x20) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00361470 + 0x20), puVar3 = DAT_0036147c, uVar2 = DAT_00361478,
     iVar4 != 0)) {
    *DAT_0036147c = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  uVar6 = *(uint *)(iVar5 + 0x1c);
  if (((*(uint *)(iVar5 + 0x1c) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00361480), puVar3 = DAT_00361488, uVar2 = DAT_00361484, uVar6 = 0,
     iVar5 != 0)) {
    *DAT_00361488 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    uVar6 = DAT_00361480;
  }
  FUN_003738a8(DAT_0036148c,uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
