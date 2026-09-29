// OoT3D decomp @ 001c6f44  name=FUN_001c6f44  size=396

void FUN_001c6f44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (((*(short *)(param_1 + 0xc14) == 0) ||
      (iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x18)), iVar3 != 0)) &&
     ((*(int *)(param_1 + 0x98) <= DAT_001c70d0 || (*(char *)(param_1 + 0xc17) != '\0')))) {
    *(undefined1 *)(param_1 + 0xc17) = 1;
    uVar1 = DAT_001c70d8;
    *(undefined2 *)(param_1 + 0xc14) = 0;
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    FUN_0034f724(param_2);
  }
  else {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x84) + DAT_001c70d4;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  }
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_00375bcc(param_1,DAT_001c70dc);
    uVar1 = DAT_001c70e0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x220) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    uVar2 = DAT_001c70e8;
    uVar1 = DAT_001c70e4;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = DAT_001c70ec;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffd;
    FUN_0036f00c(uVar1,uVar2,param_2,param_1,param_1 + 0xdd8,2,0,0,0);
    FUN_0036f00c(uVar1,uVar2,param_2,param_1,param_1 + 0xdcc,2,0,0,0);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1e0);
  if (iVar3 != 0) {
    FUN_0035ad18(param_1);
    return;
  }
  return;
}
