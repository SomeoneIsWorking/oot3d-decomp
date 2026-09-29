// OoT3D decomp @ 001cd1d4  name=FUN_001cd1d4  size=300

void FUN_001cd1d4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;

  FUN_00370734(param_1 + 0x1a4);
  iVar4 = FUN_00363e64(param_1,param_1 + 8);
  if (DAT_001cd354 < iVar4) {
    sVar3 = FUN_00367358(param_1,param_1 + 8);
    *(short *)(param_1 + 0x7e2) = sVar3 + -0x8000;
  }
  else if (*(short *)(param_1 + 0x7e2) == *(short *)(param_1 + 0x36)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x7e2),0xb6);
  uVar1 = DAT_001cd360;
  if ((*(byte *)(param_1 + 0x803) & 1) != 0) {
    *(byte *)(param_1 + 0x803) = *(byte *)(param_1 + 0x803) & 0xfe;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    FUN_00373d40(param_1 + 0x1a4,1);
    *(undefined4 *)(param_1 + 0x810) = 0xffcfffff;
    uVar1 = DAT_001cd364;
    *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x30);
    uVar2 = DAT_001cd36c;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    *(undefined4 *)(param_1 + 0xc4) = DAT_001cd368;
    FUN_00375bcc(param_1,uVar2);
    FUN_0036e670(param_2,param_1 + 0x28,0,0,1,700);
    *(undefined4 *)(param_1 + 0x7dc) = DAT_001cd370;
  }
  return;
}
