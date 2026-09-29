// OoT3D decomp @ 002f6f6c  name=FUN_002f6f6c  size=332

void FUN_002f6f6c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;

  iVar3 = DAT_002f70c0;
  uVar2 = DAT_002f70bc;
  uVar1 = DAT_002f70b8;
  iVar4 = 0;
  do {
    if (*(int *)(iVar3 + 0x14) == 5) {
      if (0x21 < iVar4 - 0x33U) goto LAB_002f6fac;
LAB_002f6fa0:
      local_1c = uVar1;
      local_18 = uVar1;
LAB_002f6fb0:
      FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,iVar4);
    }
    else {
      if (*(int *)(iVar3 + 0x28) == 0) {
        if (iVar4 < 0x33) goto LAB_002f6fa0;
LAB_002f6fac:
        local_1c = uVar2;
        goto LAB_002f6fb0;
      }
      if (*(int *)(iVar3 + 0x28) == 1) {
        if (iVar4 - 0x33U < 0x22) goto LAB_002f6fa0;
        goto LAB_002f6fac;
      }
    }
    iVar4 = iVar4 + 1;
    if (0x6b < iVar4) {
      local_1c = uVar2;
      local_18 = uVar1;
      FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,0xf);
      FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,0x10);
      FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,0x11);
      FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,0x1e);
      local_1c = uVar2;
      local_18 = uVar1;
      iVar4 = 0x2f;
      do {
        FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x33);
      iVar4 = 0x55;
      do {
        FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_1c,1,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x5b);
      return;
    }
  } while( true );
}
