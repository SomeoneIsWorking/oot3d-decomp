// OoT3D decomp @ 003254f4  name=FUN_003254f4  size=120

void FUN_003254f4(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return;
  }
  do {
    switch(*param_3) {
    case 0x14:
      return;
    case 0x18:
      iVar2 = 0;
      if (param_3[1] != '\0') {
        do {
          iVar1 = *(int *)(*(int *)(param_3 + 4) + param_1 + iVar2 * 4);
          if (iVar1 != 0) {
            FUN_003254f4(param_1,param_2,param_1 + iVar1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)(byte)param_3[1]);
      }
    }
    param_3 = param_3 + 8;
  } while( true );
}
