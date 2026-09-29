// OoT3D decomp @ 00121204  name=FUN_00121204  size=340

void FUN_00121204(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00121358;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (((*DAT_0012135c & 1) == 0) &&
         (iVar3 = FUN_003679b4(DAT_0012135c), puVar2 = DAT_00121360, iVar3 != 0)) {
        *DAT_00121360 = uVar1;
        puVar2[1] = uVar1;
        puVar2[2] = uVar1;
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 100) = uVar1;
      FUN_003642f4(param_2,param_1 + 0x28,DAT_00121360,DAT_00121360,0xfa,0xfffffff6,0xff,0xff,0xff,
                   0xff,0,0,0xff,1,0xb,1);
      FUN_00374444(param_2,param_1,param_1 + 0x28,0xc0);
      uVar4 = DAT_00121364;
    }
    else {
      FUN_00373d40(param_1 + 0x1a4,1);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      uVar4 = DAT_00121378;
      *(undefined4 *)(param_1 + 100) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x7dc) = uVar4;
  }
  iVar3 = FUN_003736fc(DAT_0012136c,DAT_00121368,param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_00375bcc(param_1,DAT_00121370);
  }
  FUN_003705a0(uVar1,DAT_00121374,param_1 + 0x6c);
  return;
}
