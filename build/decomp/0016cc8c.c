// OoT3D decomp @ 0016cc8c  name=FUN_0016cc8c  size=652

void FUN_0016cc8c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_0016cf34;
  FUN_00373500(DAT_0016cf34,DAT_0016cf34,DAT_0016cf30,param_1 + 0x378);
  if (DAT_0016cf38 <= *(int *)(param_1 + 0x378)) {
    *(undefined4 *)(param_1 + 0x378) = uVar1;
  }
  FUN_0034e418(param_1);
  if ((*(int *)(param_1 + 0x378) == 0x3f800000) &&
     (iVar2 = FUN_003769d8(param_2 + 0x28a0), iVar2 == 4)) {
    if ((*(uint *)(param_2 + 0x18) & *DAT_0016cf3c) != 0) {
LAB_0016cd48:
      *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
      FUN_0036be34(param_2,*(undefined2 *)
                            (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) +
                            0x116));
      return;
    }
    iVar2 = FUN_00346964(param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_00369f3c(param_2);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4);
        uVar3 = (**(code **)(iVar2 + 0x1d0))(param_2,iVar2);
        uVar1 = DAT_0016cf40;
        switch(uVar3) {
        case 0:
          if ((*(short *)(iVar2 + 0x1c) != 0xc) || ((*(ushort *)(DAT_0016cf48 + 0x1e) & 0x40) == 0))
          {
            FUN_0034e37c(param_2,param_1);
            *(undefined1 *)(param_1 + 0x2f9) = 0;
            *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0016ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar2 + 0x1c0))(param_2,iVar2);
            return;
          }
          FUN_0036be34(param_2,DAT_0016cf4c);
          *(undefined2 *)(param_1 + 0x2a0) = 0x1a;
          break;
        case 1:
          (**(code **)(iVar2 + 0x1d4))(param_2,iVar2);
          FUN_0036be34(param_2,0x84);
          *(undefined2 *)(param_1 + 0x2a0) = 0x17;
          *(undefined1 *)(param_1 + 0x2f9) = 0;
          *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0016ce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0x1c0))(param_2,iVar2);
          return;
        case 2:
        case 5:
          FUN_0037547c(DAT_0016cf44,0,4,DAT_0016cf54,DAT_0016cf54,DAT_0016cf50);
          FUN_0036be34(param_2,0x86);
          *(undefined2 *)(param_1 + 0x2a0) = 0xe;
          return;
        case 3:
          FUN_0037547c(DAT_0016cf44,0,4,DAT_0016cf54,DAT_0016cf54,DAT_0016cf50);
          FUN_0036be34(param_2,0x96);
          *(undefined2 *)(param_1 + 0x2a0) = 0xe;
          return;
        case 4:
          FUN_0037547c(DAT_0016cf44,0,4,DAT_0016cf54,DAT_0016cf54,DAT_0016cf50);
          FUN_0036be34(param_2,0x85);
          *(undefined2 *)(param_1 + 0x2a0) = 0xe;
          return;
        }
      }
      else if (iVar2 == 1) goto LAB_0016cd48;
    }
  }
  return;
}
