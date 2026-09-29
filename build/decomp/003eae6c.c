// OoT3D decomp @ 003eae6c  name=FUN_003eae6c  size=260

void FUN_003eae6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_003731e0(param_1 + 0x22c);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,1000,0);
  uVar2 = DAT_003eaf74;
  uVar1 = DAT_003eaf70;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_00373500(DAT_003eaf78,uVar2,uVar1,param_1 + 0x6c);
  if (*(short *)(param_1 + 0x1ba) == 0) {
    *(undefined2 *)(param_1 + 0x1ba) = 8;
    FUN_00375bcc(param_1,DAT_003eaf7c);
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0 && (*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_003eaf80;
    *(undefined4 *)(param_1 + 0x6c) = DAT_003eaf84;
  }
  uVar1 = DAT_003eaf98;
  if (*(int *)(param_1 + 0x98) < DAT_003eaf88) {
    if ((int)(*(uint *)(DAT_003eaf8c + 0xb8) & *(uint *)(DAT_003eaf90 + 0x18)) >>
        *(sbyte *)(DAT_003eaf94 + 6) == 1) {
      uVar2 = 0x77;
    }
    else {
      uVar2 = 0x78;
    }
    *(undefined4 *)(param_1 + 0x1cc) = uVar2;
    *(short *)(param_1 + 0x116) = (short)uVar1;
    FUN_00367c7c(param_2,uVar1,0);
    *(undefined2 *)(param_1 + 0x1c8) = 5;
    uVar1 = DAT_003eafa0;
    *(undefined4 *)(param_1 + 0x6c) = DAT_003eaf9c;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}
