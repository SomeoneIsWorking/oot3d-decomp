// OoT3D decomp @ 002f6e10  name=FUN_002f6e10  size=336

void FUN_002f6e10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;

  uVar3 = DAT_002f6f68;
  uVar2 = DAT_002f6f64;
  iVar1 = DAT_002f6f60;
  if (*(int *)(DAT_002f6f60 + 0x3c) != 1) {
    local_18 = DAT_002f6f64;
    local_14 = DAT_002f6f68;
    FUN_002f9430(*(undefined4 *)(DAT_002f6f60 + 8),&local_18,1,0x1f);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x20);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x21);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x22);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x36);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x37);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x38);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x39);
  }
  if (*(int *)(iVar1 + 0x40) != 1) {
    local_18 = uVar2;
    local_14 = uVar3;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x26);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x3a);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x3b);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x3c);
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_18,1,0x3d);
  }
  return;
}
