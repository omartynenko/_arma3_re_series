player addEventHandler ["InventoryOpened", {playSound 'real_bagopen';}];
player addEventHandler ["InventoryClosed", {playSound 'real_bagclose';}];
player addEventHandler ["Take", {if (!isnull (finddisplay 602)) then {playSound 'real_pickup'};}];
player addEventHandler ["Put", {if (!isnull (finddisplay 602)) then {playSound 'real_drop'};}];