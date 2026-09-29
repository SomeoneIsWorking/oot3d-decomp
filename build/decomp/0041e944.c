// OoT3D decomp @ 0041e944  name=FUN_0041e944  size=692

void FUN_0041e944(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [32];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  FUN_004289b8(DAT_0041ebf8 + 2,DAT_0041ebf8 + 4);
  iVar5 = DAT_0041ebf8;
  *(int *)(DAT_0041ebf8 + 0xc) = param_1;
  if (*(int *)(iVar5 + 0x24) != 0) {
    FUN_0042dac8(param_1);
    FUN_0042df18(param_1);
    FUN_00433a90(param_1);
    FUN_00424300();
    FUN_0042d0c0(param_1);
    FUN_00425ab4(param_1);
    FUN_00425140(param_1);
    FUN_0042f984(param_1);
    FUN_00427cc0(param_1);
    FUN_00428ad0();
    FUN_00427a70();
    FUN_0042c0a4(param_1);
    if (*(int *)(iVar5 + 0x20) != 0) {
      FUN_0043fcbc(*DAT_0041ebfc,param_1);
    }
    uVar1 = DAT_0041ec04;
    if (((*DAT_0041ec00 & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_0041ec00), puVar3 = DAT_0041ec0c, uVar2 = DAT_0041ec08, iVar4 != 0)
       ) {
      *DAT_0041ec0c = DAT_0041ec08;
      puVar3[1] = uVar1;
      puVar3[2] = uVar1;
      puVar3[3] = uVar1;
      puVar3[4] = uVar1;
      puVar3[5] = uVar2;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      puVar3[8] = uVar1;
      puVar3[9] = uVar1;
      puVar3[10] = uVar2;
      puVar3[0xb] = uVar1;
    }
    FUN_00372224(auStack_44,DAT_0041ec0c);
    local_50 = uVar1;
    local_4c = uVar1;
    local_48 = uVar1;
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))
              (*(int **)(iVar5 + 0x10),auStack_44,auStack_44,&local_50);
    FUN_0042dd84();
    FUN_004338c8();
    FUN_0042cd38();
    FUN_00423ff8();
    FUN_0042590c();
    FUN_00424efc();
    FUN_002fbc50();
    if ((((*(char *)(param_1 + 0x100) != '\x03') ||
         ((*(char *)(param_1 + 0x101) == '\x02' && (3 < *(ushort *)(DAT_0041ec10 + param_1) - 3))))
        && (iVar4 = FUN_0042f96c(), iVar4 == 0)) &&
       (((iVar4 = FUN_00427ca8(), iVar4 == 0 && (*(int *)(iVar5 + 0x14) != 0)) &&
        (iVar5 = FUN_002fbc38(), iVar5 == 0)))) {
      local_24 = uVar1;
      local_20 = uVar1;
      local_1c = uVar1;
      local_18 = DAT_0041ec14;
      if (((*DAT_0041ec18 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0041ec18), iVar5 != 0)) {
        FUN_0036788c(DAT_0041ec1c);
      }
      FUN_003339e8(DAT_0041ec28,3,&local_24,0);
    }
  }
  return;
}
