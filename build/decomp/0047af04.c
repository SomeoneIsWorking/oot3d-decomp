// OoT3D decomp @ 0047af04  name=FUN_0047af04  size=152

void FUN_0047af04(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 0;
  do {
    if ((*(ushort *)(param_2 + uVar2 * 2 + 0x151c) & 1) != 0) {
      if (((uVar2 < 0x32) &&
          (uVar1 = *(ushort *)(param_1 + 0xa98 + uVar2 * 2 + 0x156c), (uVar1 & 1) != 0)) &&
         ((uVar1 & 2) == 0)) {
        iVar3 = *(int *)(param_1 + 0xa98 + uVar2 * 0x6c + 0x54);
      }
      else {
        iVar3 = 0;
      }
      if ((iVar3 != 0) && (iVar3 == param_3)) {
        *(undefined1 *)(param_3 + 0x1b8) = 0;
        return;
      }
    }
    uVar2 = uVar2 + 1;
    if (0x31 < (int)uVar2) {
      return;
    }
  } while( true );
}
